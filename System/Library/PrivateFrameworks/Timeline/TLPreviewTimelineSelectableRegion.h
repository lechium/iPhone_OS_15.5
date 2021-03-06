//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Timeline/NSCopying-Protocol.h>
#import <Timeline/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface TLPreviewTimelineSelectableRegion : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_path;	// 8 = 0x8
    NSData *_accessibilityNode;	// 16 = 0x10
    struct CGRect _rect;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007122
- (void).cxx_destruct;	// IMP=0x0000000000007802
@property(readonly, nonatomic) NSData *accessibilityNode; // @synthesize accessibilityNode=_accessibilityNode;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007717
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000747f
- (unsigned long long)hash;	// IMP=0x000000000000743b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000731d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000720c
- (id)initWithPath:(id)arg1 rect:(struct CGRect)arg2 accessibilityNode:(id)arg3;	// IMP=0x000000000000713e
- (id)initWithPath:(id)arg1 rect:(struct CGRect)arg2;	// IMP=0x000000000000712a

@end

