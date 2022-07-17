//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWScript-Protocol.h>

@class NSString, WKUserScript;
@protocol SWSession;

@interface SWSessionScript : NSObject <SWScript>
{
    id <SWSession> _session;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000014a1e
@property(readonly, nonatomic) id <SWSession> session; // @synthesize session=_session;
@property(readonly, nonatomic) WKUserScript *userScript;
- (_Bool)queuable;	// IMP=0x0000000000014886
- (id)initWithSession:(id)arg1;	// IMP=0x000000000001481b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *executableScript;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool queueable;
@property(readonly) Class superclass;

@end
