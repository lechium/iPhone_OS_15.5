//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Weather/NSObject-Protocol.h>

@protocol WeatherPreferencesPersistence;

@protocol WeatherCloudPersistenceDelegate <NSObject>
- (void)cloudPersistenceDidSynchronize:(id <WeatherPreferencesPersistence>)arg1;
@end

