//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNTestNavigationControllerDelegate, NSString;

@interface ShowContactsTest
{
    int _nextContactIndex;	// 8 = 0x8
    int _maxContactIndex;	// 12 = 0xc
    CNTestNavigationControllerDelegate *_navControllerDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000a246
@property(retain, nonatomic) CNTestNavigationControllerDelegate *navControllerDelegate; // @synthesize navControllerDelegate=_navControllerDelegate;
@property(nonatomic) int maxContactIndex; // @synthesize maxContactIndex=_maxContactIndex;
@property(nonatomic) int nextContactIndex; // @synthesize nextContactIndex=_nextContactIndex;
- (void)showContactsListForIPhone;	// IMP=0x001000000000a012
- (void)showNextContact;	// IMP=0x0010000000009d20
- (void)iterateContact;	// IMP=0x0010000000009aa9
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000009a94
- (void)didShow:(id)arg1;	// IMP=0x001000000000991c
- (void)resetDelegate;	// IMP=0x0010000000009820
- (void)prepareForNextTest;	// IMP=0x00100000000097e2
- (_Bool)prepareForTestWithOptions:(id)arg1;	// IMP=0x00100000000094c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

