//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol STCommunicationServiceDelegate;

@interface STConcreteCommunicationService : NSObject
{
    id <STCommunicationServiceDelegate> delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000011ed7
@property __weak id <STCommunicationServiceDelegate> delegate; // @synthesize delegate;
- (void)authenticatePasscodeForUserWithEndpoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011e2a
- (void)currentCommunicationConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011db8

@end

