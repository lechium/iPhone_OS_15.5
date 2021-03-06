//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface SSSoftwareUpdate : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
    NSDate *_installDate;	// 16 = 0x10
    long long _updateState;	// 24 = 0x18
}

@property(nonatomic) long long updateState; // @synthesize updateState=_updateState;
@property(readonly, nonatomic) NSDictionary *updateDictionary; // @synthesize updateDictionary=_dictionary;
@property(copy, nonatomic) NSDate *installDate; // @synthesize installDate=_installDate;
@property(readonly, nonatomic) long long storeItemIdentifier;
@property(readonly, nonatomic) long long parentalControlsRank;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (void)dealloc;	// IMP=0x0000000000147a5d
- (id)initWithUpdateDictionary:(id)arg1;	// IMP=0x0000000000147a06

@end

