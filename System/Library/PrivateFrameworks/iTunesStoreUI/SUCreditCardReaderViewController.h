//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SUCreditCardReaderInfoView, SUCreditCardReaderOutput;

@interface SUCreditCardReaderViewController : UIViewController
{
    SUCreditCardReaderInfoView *captureInfoView;	// 8 = 0x8
    SUCreditCardReaderOutput *pendingOutput;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001fc6f
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;

@end
