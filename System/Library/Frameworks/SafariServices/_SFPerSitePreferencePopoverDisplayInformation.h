//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _SFPerSitePreferencePopoverDisplayInformation : NSObject
{
    unsigned long long _displayOption;	// 8 = 0x8
    NSString *_localizedDisplayName;	// 16 = 0x10
}

+ (void)_buildMapIfNeeded;	// IMP=0x00000000000b50d0
+ (id)popoverDisplayInformationForPerSitePreference:(id)arg1;	// IMP=0x00000000000b5039
- (void).cxx_destruct;	// IMP=0x00000000000b54d1
@property(readonly, copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(readonly, nonatomic) unsigned long long displayOption; // @synthesize displayOption=_displayOption;
- (id)_initWithDisplayOption:(unsigned long long)arg1 localizedDisplayName:(id)arg2;	// IMP=0x00000000000b542c

@end

