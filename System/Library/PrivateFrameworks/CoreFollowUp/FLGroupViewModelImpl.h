//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/FLGroupViewModel-Protocol.h>

@class NSMutableArray, NSString;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel>
{
    NSMutableArray *_mutableItems;	// 8 = 0x8
    _Bool _needsAccountID;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_rowTitle;	// 32 = 0x20
    NSString *_groupTitle;	// 40 = 0x28
    NSString *_accountID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000fd33
@property(nonatomic) _Bool needsAccountID; // @synthesize needsAccountID=_needsAccountID;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(copy, nonatomic) NSString *rowTitle; // @synthesize rowTitle=_rowTitle;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)shouldCoalesceItems;	// IMP=0x000000000000fbad
- (_Bool)restrictionEnabled;	// IMP=0x000000000000fb35
@property(readonly, copy) NSString *description;
- (id)_expirationOrInformativeText;	// IMP=0x000000000000f6c1
- (id)subtitleText;	// IMP=0x000000000000f66f
- (id)footerText;	// IMP=0x000000000000f61d
- (void)addItem:(id)arg1;	// IMP=0x000000000000f5b3
- (id)items;	// IMP=0x000000000000f595
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000000f53b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

