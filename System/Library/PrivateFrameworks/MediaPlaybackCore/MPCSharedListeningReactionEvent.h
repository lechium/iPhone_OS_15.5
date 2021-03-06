//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelGenericObject, NSString;

@interface MPCSharedListeningReactionEvent : NSObject
{
    NSString *_reactionIdentifier;	// 8 = 0x8
    NSString *_reaction;	// 16 = 0x10
    MPModelGenericObject *_item;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f872f
@property(readonly, nonatomic) MPModelGenericObject *item; // @synthesize item=_item;
@property(readonly, copy, nonatomic) NSString *reaction; // @synthesize reaction=_reaction;
@property(readonly, copy, nonatomic) NSString *reactionIdentifier; // @synthesize reactionIdentifier=_reactionIdentifier;
- (id)description;	// IMP=0x00000000000f86d3
- (id)initWithReaction:(id)arg1 reactionIdentifier:(id)arg2 item:(id)arg3;	// IMP=0x00000000000f85f4

@end

