//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/UIAlertViewDelegate-Protocol.h>

@class NSString;

@interface TSKUIAlertViewCompletionHandlerDelegate : NSObject <UIAlertViewDelegate>
{
    CDUnknownBlockType mCompletionHandler;	// 8 = 0x8
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=mCompletionHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x00000000000a30e8
- (void)dealloc;	// IMP=0x00000000000a30ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

