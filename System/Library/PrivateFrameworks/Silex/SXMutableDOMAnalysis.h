//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SXMutableConditionalObjectAnalysis, SXMutableNamespacedObjectReferences;

@interface SXMutableDOMAnalysis
{
}

- (void)removeTextStyle:(id)arg1 component:(id)arg2;	// IMP=0x00000000001393b1
- (void)removeComponentTextStyle:(id)arg1 component:(id)arg2;	// IMP=0x00000000001392e7
- (void)removeComponentStyle:(id)arg1 component:(id)arg2;	// IMP=0x000000000013921d
- (void)removeComponent:(id)arg1;	// IMP=0x0000000000138db5
- (void)addComponent:(id)arg1 parent:(id)arg2;	// IMP=0x0000000000138cff
- (void)addTextStyle:(id)arg1 component:(id)arg2;	// IMP=0x0000000000138c2d
- (void)addComponentTextStyle:(id)arg1 component:(id)arg2;	// IMP=0x0000000000138b5b
- (void)addComponentStyle:(id)arg1 component:(id)arg2;	// IMP=0x0000000000138a89
- (void)addComponent:(id)arg1 type:(id)arg2 role:(int)arg3;	// IMP=0x0000000000138841

// Remaining properties
@property(copy, nonatomic) SXMutableConditionalObjectAnalysis *conditionalObjectAnalysis;
@property(readonly, copy, nonatomic) SXMutableNamespacedObjectReferences *namespacedObjectReferences;

@end
