//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSManager;

@interface NTKCustomWorldCityAbbreviationsStore : NSObject
{
    NPSManager *_npsManager;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000158065
- (void).cxx_destruct;	// IMP=0x0000000000158411
- (void)_notifyClientsOfChange;	// IMP=0x00000000001583b7
- (void)_handlePrefsChanged;	// IMP=0x0000000000158389
- (void)setCustomAbbreviation:(id)arg1 forCityIdentifier:(id)arg2;	// IMP=0x0000000000158232
- (id)customAbbreviations;	// IMP=0x0000000000158220
- (id)_getCustomAbbreviationsFromPrefs;	// IMP=0x0000000000158182
- (void)dealloc;	// IMP=0x0000000000158141
- (id)init;	// IMP=0x00000000001580ba

@end

