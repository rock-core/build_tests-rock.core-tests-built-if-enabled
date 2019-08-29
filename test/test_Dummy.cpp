#include <boost/test/unit_test.hpp>
#include <rock-enable-tests/Dummy.hpp>

using namespace rock-enable-tests;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    rock-enable-tests::DummyClass dummy;
    dummy.welcome();
}
