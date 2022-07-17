//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TPSEventsProviderDelegate;

@interface TPSEventsProvider : NSObject
{
    id <TPSEventsProviderDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001ea71
@property(nonatomic) __weak id <TPSEventsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deregisterAllEventsForCallback;	// IMP=0x000000000001e989
- (void)deregisterEventsForCallback:(id)arg1;	// IMP=0x000000000001e8c8
- (void)registerEventsForWakingCallback:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x000000000001e807
- (void)registerEventsForCallback:(id)arg1;	// IMP=0x000000000001e746
- (void)queryEvents:(id)arg1;	// IMP=0x000000000001e685

@end
