//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CoreDAVExtensions)
+ (id)CDVPreconditionHeaderValueWithCTag:(id)arg1;	// IMP=0x0000000000042835
+ (id)CDVPreconditionHeaderValueWithCTag:(id)arg1 pathTag:(id)arg2;	// IMP=0x0000000000042783
+ (id)CDVStringWithNumberOfSpaces:(unsigned long long)arg1;	// IMP=0x00000000000419a1
+ (id)CDVStringWithNameSpace:(id)arg1 andName:(id)arg2;	// IMP=0x00000000000416a8
- (id)CDVStringByXMLUnquoting;	// IMP=0x0000000000041fc7
- (id)CDVStringByXMLQuoting;	// IMP=0x0000000000041d30
- (id)CDVStringByAddingPercentEscapesForUserOrPassword;	// IMP=0x0000000000041c5e
- (_Bool)CDVIsHTTPStatusLineWithStatusCode:(long long)arg1;	// IMP=0x0000000000041b04
- (id)CDVStringByRemovingTerminatingSlashIfNeeded;	// IMP=0x000000000004193b
- (id)CDVStringByAppendingSlashIfNeeded;	// IMP=0x00000000000418e2
- (id)CDVStringByRemovingPercentEscapesForHREF;	// IMP=0x00000000000418d0
- (id)CDVStringByAddingPercentEscapesForHREFIncludingPercent;	// IMP=0x00000000000417fe
- (id)CDVStringByAddingPercentEscapesForHREF;	// IMP=0x0000000000041718
- (id)initWithCDVNameSpace:(id)arg1 andName:(id)arg2;	// IMP=0x0000000000041672
@end

