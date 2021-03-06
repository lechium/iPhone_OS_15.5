//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPModelResponseDetailedKeepLocalStatusRequesting-Protocol.h>

@class MPMediaLibraryConnectionAssertion, NSArray, NSString;

@interface MPModelLibraryResponse <MPModelResponseDetailedKeepLocalStatusRequesting>
{
    NSArray *_sectionKeepLocalStatusConfigurations;	// 8 = 0x8
    MPMediaLibraryConnectionAssertion *_libraryAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007c3fb
@property(retain, nonatomic) MPMediaLibraryConnectionAssertion *libraryAssertion; // @synthesize libraryAssertion=_libraryAssertion;
@property(copy, nonatomic) NSArray *sectionKeepLocalStatusConfigurations; // @synthesize sectionKeepLocalStatusConfigurations=_sectionKeepLocalStatusConfigurations;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007bf4b
- (void)_mediaLibraryDidChangeNotification:(id)arg1;	// IMP=0x000000000007bf39
- (void)dealloc;	// IMP=0x000000000007be16
- (id)initWithRequest:(id)arg1;	// IMP=0x000000000007bc64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

