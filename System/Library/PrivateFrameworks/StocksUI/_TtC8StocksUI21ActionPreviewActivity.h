//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StocksUI/SXActionPreviewActivity-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8StocksUI21ActionPreviewActivity : NSObject <SXActionPreviewActivity>
{
    MISSING_TYPE *router;	// 8 = 0x8
    MISSING_TYPE *handler;	// 16 = 0x10
    MISSING_TYPE *linkedContentProvider;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001e7f50
- (id)init;	// IMP=0x00000000001e7ef0
- (void)commitViewController:(id)arg1 action:(id)arg2;	// IMP=0x00000000001e7d70
- (id)previewViewControllerForAction:(id)arg1;	// IMP=0x00000000001e7d20

@end

