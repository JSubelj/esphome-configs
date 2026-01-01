uint32_t time_from_circulation_activated(){
    return millis() - id(circulation_sw_activated_millis);
}

uint32_t circulation_duration_in_ms(){
    return (int)id(circulation_timer_duration).state * 1000 *60;
}