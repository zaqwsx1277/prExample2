#ifndef TCOMMONDEFINE_H
#define TCOMMONDEFINE_H

#include <chrono>
#include <vector>

namespace commonDefine {
/*!
 * \brief The TLogItem struct Описание структуры одной записи
 */
struct TLogItem {
    std::chrono::system_clock::time_point id {std::chrono::system_clock::now ()};  ///< Идентификатор записи с системе хранения
    std::uint32_t value {0} ;              ///< Хранмое число
    bool isShow {false} ;                  ///< Флаг того, что значение было извлечено из хранилища и выведено в лог
} ;

const size_t sizeStorage {1000} ;          ///< Размер хранилища данных
const size_t sizeLog {100} ;               ///< Размер таблицы лога

}
#endif // TCOMMONDEFINE_H
