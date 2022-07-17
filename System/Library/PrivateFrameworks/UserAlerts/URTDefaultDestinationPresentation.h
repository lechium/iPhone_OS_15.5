//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserAlerts/URTDestinationPresenting-Protocol.h>

@class NSString, URTAlert;
@protocol URTDestinationPresentationDelegate;

__attribute__((visibility("hidden")))
@interface URTDefaultDestinationPresentation <URTDestinationPresenting>
{
    struct __CFRunLoopSource *_runLoopSource;	// 40 = 0x28
    URTAlert *_alert;	// 48 = 0x30
    long long _destination;	// 56 = 0x38
    id <URTDestinationPresentationDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000001b50
@property(nonatomic) __weak id <URTDestinationPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) URTAlert *alert; // @synthesize alert=_alert;
- (void)_invokeDelegateForResponseFlags:(unsigned long long)arg1;	// IMP=0x00000000000019fc
- (void)present;	// IMP=0x00000000000018b3
- (void)invalidate;	// IMP=0x0000000000001844
- (id)initWithAlert:(id)arg1 forDestination:(long long)arg2;	// IMP=0x0000000000001794

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
