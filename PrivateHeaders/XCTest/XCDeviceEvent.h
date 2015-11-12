// Copyright 2004-present Facebook. All Rights Reserved.

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCDeviceEvent : NSObject <NSSecureCoding>
{
    unsigned int _eventPage;
    unsigned int _usage;
    double _duration;
}

+ (id)deviceEventWithPage:(unsigned int)arg1 usage:(unsigned int)arg2 duration:(double)arg3;
+ (_Bool)supportsSecureCoding;
@property (atomic, assign) double duration; // @synthesize duration=_duration;
@property (atomic, assign) unsigned int usage; // @synthesize usage=_usage;
@property (atomic, assign) unsigned int eventPage; // @synthesize eventPage=_eventPage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
