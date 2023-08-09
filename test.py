def next_location(N):
    if N % 2 == 0:
        return N ** 2
    else:
        return 3 * N + 1

def explore_jungle(start_location, magic_door_location):
    locations = set()
    current_location = start_location
    while current_location not in locations:
        locations.add(current_location)
        if current_location == magic_door_location:
            break
        current_location = next_location(current_location)
    return locations

def find_best_location_to_explore(max_location):
    max_reachable = 0
    best_location = 0

    for i in range(1, max_location + 1):
        reachable_locations = explore_jungle(i, max_location)
        num_reachable = len(reachable_locations)
        if num_reachable > max_reachable:
            max_reachable = num_reachable
            best_location = i

    return best_location, max_reachable

M = 5  # Adjust this value to the desired maximum location

best_location, max_reachable = find_best_location_to_explore(M)
print(f"The best location to explore is {best_location} with {max_reachable} reachable locations.")
