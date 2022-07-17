//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

#import <CoreMaterial/MTFilterIdentityValueProviding-Protocol.h>
#import <CoreMaterial/MTMaterialSettingsPropertyIdentityValueProviding-Protocol.h>

@class NSString;

@interface NSValue (CoreMaterialAdditions) <MTFilterIdentityValueProviding, MTMaterialSettingsPropertyIdentityValueProviding>
+ (id)mt_identityValueForMaterialSettingsProperty:(id)arg1;	// IMP=0x000000000000af5f
+ (id)mt_identityValueForFilter:(id)arg1;	// IMP=0x000000000000ae6c
- (_Bool)mt_isIdentityValueForMaterialSettingsProperty:(id)arg1;	// IMP=0x000000000000b1a4
- (_Bool)mt_isIdentityValueForFilter:(id)arg1;	// IMP=0x000000000000b125

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
