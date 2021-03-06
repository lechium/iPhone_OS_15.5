//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface REMFetchResultToken : NSObject <NSSecureCoding>
{
    NSDictionary *_persistentHistoryTokens;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000054e7d
+ (id)fetchResultTokenFromDataRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000054da5
- (void).cxx_destruct;	// IMP=0x0000000000055206
@property(readonly, nonatomic) NSDictionary *persistentHistoryTokens; // @synthesize persistentHistoryTokens=_persistentHistoryTokens;
- (id)dataRepresentationWithError:(id *)arg1;	// IMP=0x00000000000551d8
- (id)description;	// IMP=0x0000000000055150
- (unsigned long long)hash;	// IMP=0x000000000005510c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000054fde
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000054f65
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000054e85
- (id)initWithPersistentHistoryTokens:(id)arg1;	// IMP=0x0000000000054e12

@end

