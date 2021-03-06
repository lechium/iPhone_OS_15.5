//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface FPTransformOperation
{
    NSArray *_items;	// 152 = 0x98
    CDUnknownBlockType _transformCompletionBlock;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000000dede0
@property(copy, nonatomic) CDUnknownBlockType transformCompletionBlock; // @synthesize transformCompletionBlock=_transformCompletionBlock;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)fp_prettyDescription;	// IMP=0x00000000000decfe
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000dec81
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000deb4b
- (void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000deb45
- (id)finalItemsForStitcherForResult:(id)arg1;	// IMP=0x00000000000deb2f
- (void)presendNotifications;	// IMP=0x00000000000de9bc
- (void)actionMain;	// IMP=0x00000000000de603
- (id)initWithItemsOfDifferentProviders:(id)arg1 action:(id)arg2;	// IMP=0x00000000000de57c

@end

