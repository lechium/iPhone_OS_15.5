//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SIMToolkitUI/BSXPCCoding-Protocol.h>

@class NSString;

@interface STKUSSDSessionData : NSObject <BSXPCCoding>
{
    _Bool _allowsResponse;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001251e
@property(readonly, nonatomic) _Bool allowsResponse; // @synthesize allowsResponse=_allowsResponse;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x00000000000124b5
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000001242d
- (id)initWithText:(id)arg1 allowsResponse:(_Bool)arg2;	// IMP=0x00000000000123af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

