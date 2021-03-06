//
//  NSString+ISLingusitics.h
//  ISLingusitics
//
//  Created by Iain Smith on 14/04/2013.
//  Copyright (c) 2013 mountain23. All rights reserved.
//

#import <Foundation/Foundation.h>

/**  
 `NSString+ISLingusitcs' provides a set of conveniences methods for enumerating differenet lingustic properties of strings correctly for languages supported by NSLingusticTagger.
 */

@interface NSString (ISLinguistics)

/**
 Enumerates all the words in a string.
 
 @param block The block executed for the enumeration.
     
 The block takes two arguments:
 
 - word:
    - The current word of the string being enumerated. The word contains just the contents of the word, without any whitespace.
 - stop:
    - A reference to a Boolean value that the block can use to stop the enumeration by setting *stop = YES; it should not touch *stop otherwise.
 */
- (void)enumerateWordsUsingBlock_is:(void (^)(NSString *word, BOOL *stop))block;

/**
 Enumerates all the sentences in a string.
 
 @param block The block executed for the enumeration.
 
 The block takes two arguments:
 
 - sentence:
    - The current sentence of the string being enumerated. The word contains just the contents of the word, without any whitespace.
 - stop:
    - A reference to a Boolean value that the block can use to stop the enumeration by setting *stop = YES; it should not touch *stop otherwise.
 */
- (void)enumerateSentencesUsingBlock_is:(void (^)(NSString *sentence, BOOL *stop))block;

/**
 Enumerates all the nouns in a string.
 
 @param block The block executed for the enumeration.
 
 The block takes two arguments:
 
 - noun:
    - The current noun of the string being enumerated. The word contains just the contents of the word, without any whitespace.
 - stop:
    - A reference to a Boolean value that the block can use to stop the enumeration by setting *stop = YES; it should not touch *stop otherwise.
 */
- (void)enumerateNounsUsingBlock_is:(void (^)(NSString *noun, BOOL *stop))block;

/**
 Enumerates all the verbs in a string.
 
 @param block The block executed for the enumeration.
 
 The block takes two arguments:
 
 - verb:
    - The current verb of the string being enumerated. The word contains just the contents of the word, without any whitespace.
 - stop:
    - A reference to a Boolean value that the block can use to stop the enumeration by setting *stop = YES; it should not touch *stop otherwise.
 */
- (void)enumerateVerbsUsingBlock_is:(void (^)(NSString *word, BOOL *stop))block;

@end
