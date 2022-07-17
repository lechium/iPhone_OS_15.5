//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol UIMutableTransformerDelegate;

@interface UIMutableTransformer
{
    id <UIMutableTransformerDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000073f5aa
@property(nonatomic, setter=_setDelegate:) __weak id <UIMutableTransformerDelegate> _delegate; // @synthesize _delegate;
- (void)_updateTransform;	// IMP=0x000000000073f2d3
- (void)_ensureTransformsStructuresExists;	// IMP=0x000000000073f274
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000073f168
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000073f13a
- (void)removeAll;	// IMP=0x000000000073f0c3
- (void)removeTransform:(id)arg1;	// IMP=0x000000000073ef9b
- (void)replaceTransform:(id)arg1 withTransform:(id)arg2 reason:(id)arg3;	// IMP=0x000000000073ed82
- (void)addTransform:(id)arg1 reason:(id)arg2;	// IMP=0x000000000073ec2a

@end
