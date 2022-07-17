//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IntlPreferences/IPNamePreferenceInfoProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface IPiOSABNamePreferenceInfoProvider : NSObject <IPNamePreferenceInfoProvider>
{
}

+ (id)canonicalKeyToValueIdentifierToNumericValueMap;	// IMP=0x000000000000aa5f
+ (id)valueToValueIdentifierMapFromCanonicalKey:(id)arg1;	// IMP=0x000000000000a9bd
+ (id)valueIdentifierToValueMapFromCanonicalKey:(id)arg1;	// IMP=0x000000000000a93a
+ (id)canonicalNameToNativeKeyName;	// IMP=0x000000000000a86b
+ (id)nativeKeyNameToCanonicalKeyName;	// IMP=0x000000000000a776
+ (id)domain;	// IMP=0x000000000000a769

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
