//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSDInsertionContext : NSObject
{
}

+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint)arg1 required:(_Bool)arg2 shouldEndEditing:(_Bool)arg3 fromDragToInsertController:(_Bool)arg4 insertWillBeDiscarded:(_Bool)arg5;	// IMP=0x000000000023d559
+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint)arg1 required:(_Bool)arg2 fromDragToInsertController:(_Bool)arg3 insertWillBeDiscarded:(_Bool)arg4;	// IMP=0x000000000023d539
+ (id)nonInteractiveFloatingInsertionContext;	// IMP=0x000000000023d4f4
+ (id)nonInteractiveInsertionContext;	// IMP=0x000000000023d4af
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic) _Bool insertWillBeDiscarded;
@property(readonly, nonatomic) _Bool fromDragToInsertController;
@property(readonly, nonatomic) _Bool insertFromDrag;
@property(readonly, nonatomic) _Bool insertFloating;
@property(readonly, nonatomic) _Bool shouldEndEditing;
@property(readonly, nonatomic) struct CGPoint preferredCenter;
@property(readonly, nonatomic, getter=isPreferredCenterRequired) _Bool preferredCenterRequired;
@property(readonly, nonatomic) _Bool hasPreferredCenter;
- (id)init;	// IMP=0x000000000023d5c2

@end

