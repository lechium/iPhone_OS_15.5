//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@protocol TUCallServicesClientCapabilitiesActions;

@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding>
{
    _Bool _wantsCallDisconnectionOnInvalidation;	// 8 = 0x8
    _Bool _wantsCallStopStreamingOnInvalidation;	// 9 = 0x9
    _Bool _wantsFrequencyChangeNotifications;	// 10 = 0xa
    _Bool _wantsCallNotificationsDisabledWhileSuspended;	// 11 = 0xb
    id <TUCallServicesClientCapabilitiesActions> _delegate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d2f75
- (void).cxx_destruct;	// IMP=0x00000000000d3250
@property(nonatomic) __weak id <TUCallServicesClientCapabilitiesActions> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool wantsCallNotificationsDisabledWhileSuspended; // @synthesize wantsCallNotificationsDisabledWhileSuspended=_wantsCallNotificationsDisabledWhileSuspended;
@property(nonatomic) _Bool wantsFrequencyChangeNotifications; // @synthesize wantsFrequencyChangeNotifications=_wantsFrequencyChangeNotifications;
@property(nonatomic) _Bool wantsCallStopStreamingOnInvalidation; // @synthesize wantsCallStopStreamingOnInvalidation=_wantsCallStopStreamingOnInvalidation;
@property(nonatomic) _Bool wantsCallDisconnectionOnInvalidation; // @synthesize wantsCallDisconnectionOnInvalidation=_wantsCallDisconnectionOnInvalidation;
- (id)description;	// IMP=0x00000000000d30cd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d3034
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d2f7d
- (void)save;	// IMP=0x00000000000d2f29

@end

