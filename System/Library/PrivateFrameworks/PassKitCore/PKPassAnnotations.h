//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKPassAnnotations : NSObject <NSCopying, NSSecureCoding>
{
    long long _sortingState;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a567f
@property(nonatomic) long long sortingState; // @synthesize sortingState=_sortingState;
- (unsigned long long)hash;	// IMP=0x00000000000a582a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a5803
- (id)initWithSortingState:(long long)arg1;	// IMP=0x00000000000a57c6
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000a5756
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a56e6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a56c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a5687

@end

