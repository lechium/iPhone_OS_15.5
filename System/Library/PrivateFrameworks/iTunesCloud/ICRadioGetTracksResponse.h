//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICRadioStationMetadata, NSArray, NSDate;

@interface ICRadioGetTracksResponse
{
    NSDate *_assetExpirationDate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000162487
@property(readonly, copy, nonatomic) NSDate *assetExpirationDate; // @synthesize assetExpirationDate=_assetExpirationDate;
@property(readonly, copy, nonatomic) NSArray *tracks;
@property(readonly, nonatomic) long long tracklistActionType;
@property(readonly, nonatomic) ICRadioStationMetadata *stationMetadata;
- (id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0000000000161f74

@end

