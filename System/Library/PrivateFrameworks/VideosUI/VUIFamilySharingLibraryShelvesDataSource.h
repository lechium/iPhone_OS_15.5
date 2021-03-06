//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUILibraryDataSourceDelegate-Protocol.h>

@class NSMutableSet, NSString, VUIFamilyMember;

__attribute__((visibility("hidden")))
@interface VUIFamilySharingLibraryShelvesDataSource <VUILibraryDataSourceDelegate>
{
    VUIFamilyMember *_familyMember;	// 8 = 0x8
    NSMutableSet *_fetchedDataSources;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000263070
@property(retain, nonatomic) NSMutableSet *fetchedDataSources; // @synthesize fetchedDataSources=_fetchedDataSources;
@property(retain, nonatomic) VUIFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (id)_dataSourceForShelves;	// IMP=0x0000000000262d8b
- (void)dataSourceDidFinishFetching:(id)arg1;	// IMP=0x0000000000262bab
- (void)startFetch;	// IMP=0x0000000000262b39
- (void)dealloc;	// IMP=0x0000000000262af0
- (id)initWithValidShelfTypes:(id)arg1 withFamilyMember:(id)arg2;	// IMP=0x0000000000262a78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

