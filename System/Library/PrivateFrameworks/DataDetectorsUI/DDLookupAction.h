//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RVQuery;

__attribute__((visibility("hidden")))
@interface DDLookupAction
{
    NSString *_queryString;	// 96 = 0x60
    struct _NSRange _queryStringRange;	// 104 = 0x68
    RVQuery *_query;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000002c2b5
- (id)menuActions;	// IMP=0x000000000002c0e6
- (id)createViewController;	// IMP=0x000000000002bffa
- (void)adaptForPresentationInPopover:(_Bool)arg1;	// IMP=0x000000000002bfdd
- (id)initWithQueryString:(id)arg1 range:(struct _NSRange)arg2 context:(id)arg3;	// IMP=0x000000000002bf24
- (id)initWithRVQuery:(id)arg1 context:(id)arg2;	// IMP=0x000000000002be96

@end
