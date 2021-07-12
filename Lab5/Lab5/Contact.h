//
//  Contact.h
//  Lab5
//
//  Created by user169313 on 2021-07-10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Contact : NSObject

@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *email;

- (id) init: (NSString *)fullName email:(NSString *)e;

@end

NS_ASSUME_NONNULL_END
