//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface PGTripKeyAssetQuestion
{
    unsigned short _state;	// 8 = 0x8
    NSDictionary *_additionalInfo;	// 16 = 0x10
    NSString *_entityIdentifier;	// 24 = 0x18
    double _localFactoryScore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003967f7
- (unsigned short)state;	// IMP=0x00000000003967e6
- (double)localFactoryScore;	// IMP=0x00000000003967d4
- (id)entityIdentifier;	// IMP=0x00000000003967c3
- (id)additionalInfo;	// IMP=0x00000000003967b2
- (unsigned short)entityType;	// IMP=0x00000000003967a7
- (unsigned short)displayType;	// IMP=0x000000000039679c
- (unsigned short)type;	// IMP=0x0000000000396791
- (id)initWithKeyAssetUUID:(id)arg1 tripName:(id)arg2 isLongTrip:(_Bool)arg3 localFactoryScore:(double)arg4;	// IMP=0x000000000039661f

@end

