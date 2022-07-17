//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, CoreDAVMatchResultsItem, NSMutableArray, NSMutableSet;

@interface CoreDAVResponseItem
{
    NSMutableArray *_hrefs;	// 56 = 0x38
    CoreDAVLeafItem *_status;	// 64 = 0x40
    NSMutableSet *_propStats;	// 72 = 0x48
    CoreDAVErrorItem *_errorItem;	// 80 = 0x50
    CoreDAVLeafItem *_responseDescription;	// 88 = 0x58
    CoreDAVItemWithHrefChildItem *_location;	// 96 = 0x60
    CoreDAVLeafItem *_serverUID;	// 104 = 0x68
    CoreDAVMatchResultsItem *_matchResults;	// 112 = 0x70
}

+ (id)copyParseRules;	// IMP=0x0000000000027642
- (void).cxx_destruct;	// IMP=0x000000000002863b
@property(retain, nonatomic) CoreDAVMatchResultsItem *matchResults; // @synthesize matchResults=_matchResults;
@property(retain, nonatomic) CoreDAVLeafItem *serverUID; // @synthesize serverUID=_serverUID;
@property(retain, nonatomic) CoreDAVItemWithHrefChildItem *location; // @synthesize location=_location;
@property(retain, nonatomic) CoreDAVLeafItem *responseDescription; // @synthesize responseDescription=_responseDescription;
@property(retain, nonatomic) CoreDAVErrorItem *errorItem; // @synthesize errorItem=_errorItem;
@property(retain, nonatomic) NSMutableSet *propStats; // @synthesize propStats=_propStats;
@property(retain, nonatomic) CoreDAVLeafItem *status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableArray *hrefs; // @synthesize hrefs=_hrefs;
- (_Bool)hasPropertyError;	// IMP=0x0000000000028216
- (id)successfulPropertiesToValues;	// IMP=0x0000000000027dd2
- (id)firstHref;	// IMP=0x0000000000027d80
- (void)addHref:(id)arg1;	// IMP=0x0000000000027cbe
- (void)addPropStat:(id)arg1;	// IMP=0x0000000000027bfc
- (id)description;	// IMP=0x00000000000273c4
- (id)init;	// IMP=0x000000000002739e

@end
