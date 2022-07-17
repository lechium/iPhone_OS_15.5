//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WBSTabDialog : NSObject
{
    CDUnknownBlockType _presentationBlock;	// 8 = 0x8
    CDUnknownBlockType _dismissalBlock;	// 16 = 0x10
    _Bool _blocksWebProcessUntilDismissed;	// 24 = 0x18
    NSArray *_cancellationExemptions;	// 32 = 0x20
}

+ (id)tabDialogWithPresentationBlock:(CDUnknownBlockType)arg1 dismissalBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001323bd
- (void).cxx_destruct;	// IMP=0x0000000000132543
@property(copy, nonatomic) NSArray *cancellationExemptions; // @synthesize cancellationExemptions=_cancellationExemptions;
@property(nonatomic) _Bool blocksWebProcessUntilDismissed; // @synthesize blocksWebProcessUntilDismissed=_blocksWebProcessUntilDismissed;
- (id)createInfo;	// IMP=0x00000000001324b8
- (id)init;	// IMP=0x0000000000132489
- (id)_init;	// IMP=0x000000000013245a

@end
