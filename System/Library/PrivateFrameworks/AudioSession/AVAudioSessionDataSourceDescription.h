//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface AVAudioSessionDataSourceDescription : NSObject
{
    void *_impl;	// 8 = 0x8
}

+ (id)privateCreateArray:(id)arg1 portID:(id)arg2 sessionID:(unsigned int)arg3;	// IMP=0x000000000001339a
- (id)privateGetOwningPortID;	// IMP=0x0000000000013577
- (void)configurePolarPatterns:(id)arg1;	// IMP=0x0000000000012daf
- (id)initWithRawSourceDescription:(id)arg1 andOwningPortID:(id)arg2 andSessionID:(unsigned int)arg3;	// IMP=0x00000000000126de
- (_Bool)privateMatchesRawDescription:(id)arg1;	// IMP=0x0000000000012490
- (struct DataSourceDescriptionImpl *)privateGetImplementation;	// IMP=0x0000000000012486
- (_Bool)setPreferredPolarPattern:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001212a
- (id)description;	// IMP=0x000000000001203a
@property(readonly) NSArray *supportedPolarPatterns;
@property(readonly) NSString *preferredPolarPattern;
@property(readonly) NSString *selectedPolarPattern;
@property(readonly) NSString *orientation;
@property(readonly) NSString *location;
@property(readonly) NSString *dataSourceName;
@property(readonly) NSNumber *dataSourceID;
- (unsigned long long)hash;	// IMP=0x0000000000011f5e
- (_Bool)isEqualToDataSource:(id)arg1;	// IMP=0x0000000000011bc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011b4b
- (void)dealloc;	// IMP=0x0000000000011af5
- (id)initWithSessionID:(unsigned int)arg1;	// IMP=0x0000000000011a70

@end

