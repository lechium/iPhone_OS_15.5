//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@interface NSPersistentHistoryToken : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018991c
- (id)storeTokens;	// IMP=0x0000000000189988
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018997d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000189952
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000189924

@end

