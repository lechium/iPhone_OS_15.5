//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSourceInclusionPolicy-Protocol.h>

@class CNUserDefaults, NSString;

@interface _CNAutocompleteUserDefaultsSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>
{
    CNUserDefaults *_userDefaults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002bbc2
@property(readonly) CNUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly) _Bool includeSupplementalResults;
@property(readonly) _Bool includeCalendarServers;
@property(readonly) _Bool includeDirectoryServers;
@property(readonly) _Bool includePredictions;
@property(readonly) _Bool includeLocalExtensions;
@property(readonly) _Bool includeSuggestions;
@property(readonly) _Bool includeRecents;
@property(readonly) _Bool includeContacts;
- (id)initWithUserDefaults:(id)arg1;	// IMP=0x000000000002b428

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

