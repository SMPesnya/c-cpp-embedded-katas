> **Репозиторий содержит**
> Практические задания, каты и эксперименты на C/C++ для встраиваемых систем — от базового синтаксиса до работы с железом.
> Отработка принципов экстремального программирования, CI/CD pipeline и автоматизации
> Работу с интрументами необходимыми для профессиональной разработки

# Структура репозитрория

```bash
# tree -L 1
.
├── LICENSE   # файл лицензии
├── README.md # этот файл
├── roadmaps  # дорожные карта
└── shild_c   # изучение книги "C класическое издание Г.Шилд" с уклоном в Embedded и экртимального программирования по Куте Беку
```

# 📚 Документация по проекту

> Основные материалы и обучающие ресурсы:

.  
├── 📄 [LICENSE](https://smpesnya.github.io/c-cpp-embedded-katas/LICENSE)  
├── 📄 [README](https://smpesnya.github.io/c-cpp-embedded-katas/README.md)  
├── 📂 roadmaps  
│   ├── 📄 [Дорожная карта по embedded (вариант 1)](https://smpesnya.github.io/c-cpp-embedded-katas/roadmaps/slon_c_cpp_embedded_roadmap.html)  
│   ├── 📄 [Дорожная карта по embedded (вариант 2)](https://smpesnya.github.io/c-cpp-embedded-katas/roadmaps/slon_c_cpp_embedded_roadmap_links.html)  
│   └── 📄 [Дорожная карта по embedded (вариант 3)](https://smpesnya.github.io/c-cpp-embedded-katas/roadmaps/slon_c_cpp_embedded_roadmap_with_grok.html)  
└── 📂 shild_c  
    ├── 📂 ch01  
    │   ├── 📂 task1  
    │   └── 📄 [Задания дла главы №1](https://smpesnya.github.io/c-cpp-embedded-katas/shild_c/ch01/tasks.html)  
    └── 📄 [Как лучше читать главы](https://smpesnya.github.io/c-cpp-embedded-katas/shild_c/shild-chapters-priority.html)  

# Ветвление в репозитории

- **`master`** - стабильные, релизы
- **`develop`** - все, что готово к заливке в `master`, но не прошло финальные тесты и отбор
- **`batch/<area>-<chapter>`** - серии задач по направлениям и главам (например, `batch/shild_c-ch1`)
- **`batch/<area>-<chapter>-<topic>`** - серии задач по направлениям, главам и задачам (например, `batch/shild_c-ch1-t01`)
- **`fix/<area>-<chapter>-<topic>`**   - исправление ошибок у заданного направления
- **`fix/<area>`** - исправление ошибок относящихся к общим здачам (например, CI/CD)
- **`spike/<area>-<chapter>-<topic>`** - исследования и наброски, которые могут не попасть в релиз, по заданному направлению
- **`spice/<area>`** - исследования и наброски, общие 

## Как работать

1. От `develop` создаешь `batch/<area>-<chapter>` для работы над главой направления, например над главой или большой задачей:
```
batch/shild_c-ch1
```
2. И туда уже вливаешь ветки по задачам:
```bash
batch/shild_c-ch1-t01
batch/shild_c-ch1-t02
...
```
3. Когда задача готова вливаешь ее в ветку главы **PR:**`batch/shild_c-ch1-t01` __**->**__ `batch/shild_c-ch1`
4. Когда все задачи в главе будут готовы можно заливатьв `develop`, **PR:**`batch/shild_c-ch1` __**->**__ `develop`
5. Когда код ~~достоин~~ готов, что бы его влили делаем **PR:**`develop` __**->**__ `master`

