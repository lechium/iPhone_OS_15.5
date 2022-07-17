//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSString;

@interface HMSignificantTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSString *_significantEvent;	// 16 = 0x10
    NSDateComponents *_offset;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ea4d9
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;	// IMP=0x00000000000ea423
- (void).cxx_destruct;	// IMP=0x00000000000ea34b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ea345
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ea256
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ea1cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ea144
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000000e9f5f
- (void)updateOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e9af6
- (void)updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e9719
- (void)_updateFromDictionary:(id)arg1;	// IMP=0x00000000000e9640
- (id)_serializeForAdd;	// IMP=0x00000000000e9502
@property(retain, nonatomic) NSDateComponents *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (id)initWithDict:(id)arg1 significantEvent:(id)arg2 offset:(id)arg3;	// IMP=0x00000000000e9086
- (id)initWithSignificantEvent:(id)arg1 offset:(id)arg2;	// IMP=0x00000000000e8f84

@end
