```mermaid
flowchart TD
	Start([Start]) --> Input[/รับ player_attack, enemy_defense, enemy_hp/]
	Input --> Calc["damage = max(player_attack - enemy_defense, 1)"]
	Calc --> Reduce["enemy_hp = enemy_hp - damage"]
	Reduce --> D1{enemy_hp <= 0?}
	D1 -->|Yes| Win[/แสดง Victory!/]
	D1 -->|No| Show[/แสดง enemy_hp ที่เหลิอ/]
	Win & Show --> End([End])
```

```mermaid
flowchart TD
	Start([Start]) --> Input[/รับ current_xp, xp_needed, level/]
	Input --> D1{current_x >= xp_needed?}
	D1 -->|Yes| lvlup["level = level + 1"]
	lvlup --> increasexp["xp_needed = xp_needed x 1.5"]
	increasexp --> resetxp["current_xp = 0"]
	resetxp --> output[/แสดง level และ current_xp/]
	D1 -->|No| output
	output --> End([End])
```
