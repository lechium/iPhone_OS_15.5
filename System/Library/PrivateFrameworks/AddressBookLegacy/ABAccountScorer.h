//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSString;

@interface ABAccountScorer : NSObject
{
    int _sourceID;	// 8 = 0x8
    int _defaultSourceID;	// 12 = 0xc
    double _score;	// 16 = 0x10
    NSString *_accountType;	// 24 = 0x18
    void *_addressBook;	// 32 = 0x20
    ACAccountStore *_accountStore;	// 40 = 0x28
    void *_account;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000013351
@property(nonatomic) int defaultSourceID; // @synthesize defaultSourceID=_defaultSourceID;
@property(nonatomic) void *account; // @synthesize account=_account;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(nonatomic) int sourceID; // @synthesize sourceID=_sourceID;
@property(retain, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
@property(nonatomic) double score; // @synthesize score=_score;
- (int)_findBestSourceID;	// IMP=0x00000000000130fb
- (void)calculateScore;	// IMP=0x0000000000012e4c
@property(readonly, nonatomic) NSString *accountDisambiguationDescription;
@property(readonly, nonatomic) NSString *accountTypeDescription;
- (void)dealloc;	// IMP=0x0000000000012c4c
- (id)initWithAddressBook:(void *)arg1 accountStore:(id)arg2 account:(void *)arg3 defaultSourceID:(int)arg4;	// IMP=0x0000000000012b8f

@end
