//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SCKDatabase;
@protocol SCKZoneReading;

@protocol SCKDatabaseObserver
- (void)database:(SCKDatabase *)arg1 didChangeZone:(NSString *)arg2 from:(id <SCKZoneReading>)arg3 to:(id <SCKZoneReading>)arg4;
@end

