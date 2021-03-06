//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/WBSParsecModel.h>

@class NSString, NSURL;

@interface WBSParsecPunchout : WBSParsecModel
{
    NSString *_name;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSString *_punchoutLabel;	// 24 = 0x18
    NSURL *_punchoutURL;	// 32 = 0x20
    NSURL *_installURL;	// 40 = 0x28
}

+ (id)schema;	// IMP=0x000000000011c179
- (void).cxx_destruct;	// IMP=0x000000000011c572
@property(readonly, nonatomic) NSURL *installURL; // @synthesize installURL=_installURL;
@property(readonly, nonatomic) NSURL *punchoutURL; // @synthesize punchoutURL=_punchoutURL;
@property(readonly, copy, nonatomic) NSString *punchoutLabel; // @synthesize punchoutLabel=_punchoutLabel;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000011c2dd

@end

