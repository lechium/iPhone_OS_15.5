//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface STMutableTelephonyCarrierBundleInfo
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000177cd
@property(copy, nonatomic) NSString *homeCountryCode; // @dynamic homeCountryCode;
@property(copy, nonatomic) NSString *carrierName; // @dynamic carrierName;
@property(copy, nonatomic) NSArray *disabledApplicationIDs; // @dynamic disabledApplicationIDs;
@property(copy, nonatomic) NSString *customerServicePhoneNumber; // @dynamic customerServicePhoneNumber;
@property(nonatomic, getter=isReinitiatingActivationDisabled) _Bool reinitiatingActivationDisabled; // @dynamic reinitiatingActivationDisabled;
@property(nonatomic) _Bool LTEConnectionShows4G; // @dynamic LTEConnectionShows4G;

@end
