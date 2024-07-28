func solution(n: Int) -> Bool {
    let numberString = String(n)
    let sizeNumber = numberString.count
    var sum1 = 0
    var sum2 = 0

    let middleIndex = sizeNumber / 2

    for i in 0..<middleIndex {
        if let digit = numberString[numberString.index(numberString.startIndex, offsetBy: i)].wholeNumberValue {
            sum1 += digit
        }
    }
    
    for i in middleIndex..<sizeNumber {
        if let digit = numberString[numberString.index(numberString.startIndex, offsetBy: i)].wholeNumberValue {
            sum2 += digit
        }
    }
    
    return sum1 == sum2
}
