//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UICommandChange : NSObject <NSCopying, NSSecureCoding>
{
    id _anchor;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000001044a03
- (void).cxx_destruct;	// IMP=0x0000000001044d0a
@property(readonly, nonatomic) id anchor; // @synthesize anchor=_anchor;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001044ca1
- (unsigned long long)hash;	// IMP=0x0000000001044c8b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000001044c68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001044c5d
- (_Bool)acceptBoolItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x0000000001044be0
- (void)acceptItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x0000000001044b66
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001044a7e
- (id)initWithAnchor:(id)arg1;	// IMP=0x0000000001044a0b

@end

