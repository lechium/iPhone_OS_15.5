//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, SHClusterStatus;

__attribute__((visibility("hidden")))
@interface SHClusterSQLiteDataStore : NSObject
{
    double _databaseMaxAge;	// 8 = 0x8
    NSURL *_databaseFilePathURL;	// 16 = 0x10
    long long _clusterType;	// 24 = 0x18
    NSString *_requiredStorefront;	// 32 = 0x20
}

+ (_Bool)sqliteDatabaseExistsAtURL:(id)arg1;	// IMP=0x0000000000007c12
- (void).cxx_destruct;	// IMP=0x0000000000008400
@property(readonly, nonatomic) NSString *requiredStorefront; // @synthesize requiredStorefront=_requiredStorefront;
@property(readonly, nonatomic) long long clusterType; // @synthesize clusterType=_clusterType;
@property(readonly, nonatomic) NSURL *databaseFilePathURL; // @synthesize databaseFilePathURL=_databaseFilePathURL;
@property(readonly, nonatomic) double databaseMaxAge; // @synthesize databaseMaxAge=_databaseMaxAge;
@property(readonly, nonatomic) SHClusterStatus *dataStatus;
- (_Bool)isDataLoaded;	// IMP=0x0000000000007f98
- (_Bool)hasNotPassedExpiryDate:(id)arg1 isForCountryCode:(id)arg2;	// IMP=0x0000000000007ddf
- (_Bool)isDataValid;	// IMP=0x0000000000007d3b
- (id)initWithClusterType:(long long)arg1 databaseMaxAge:(double)arg2 forStorefront:(id)arg3 databaseFilePathURL:(id)arg4;	// IMP=0x0000000000007c8a

@end

