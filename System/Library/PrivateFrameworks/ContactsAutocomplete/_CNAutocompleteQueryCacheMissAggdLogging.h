//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteQueryCacheMissLogging-Protocol.h>

@class CNAutocompleteAggdProbe, NSString;

@interface _CNAutocompleteQueryCacheMissAggdLogging : NSObject <CNAutocompleteQueryCacheMissLogging>
{
    CNAutocompleteAggdProbe *_probe;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000074e9
@property(readonly) CNAutocompleteAggdProbe *probe; // @synthesize probe=_probe;
- (void)didReturnCacheFalsePositives:(id)arg1;	// IMP=0x00000000000073e1
- (void)didReturnCacheFalseNegatives:(id)arg1;	// IMP=0x00000000000072ed
- (id)initWithProbe:(id)arg1;	// IMP=0x000000000000726f
- (id)init;	// IMP=0x0000000000007181

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
